import smtplib
from email.message import EmailMessage
import imghdr
import gspread
from oauth2client.service_account import ServiceAccountCredentials


class Mailman:
    def __init__(self, email_address, email_password):
        self.EMAIL_ADDRESS = email_address
        self.EMAIL_PASSWORD = email_password
    
    def sendingMessage(self, msg):
        with smtplib.SMTP('smtp.gmail.com', 587) as smtp:
            smtp.ehlo()
            smtp.starttls()
            smtp.ehlo()
            smtp.login(self.EMAIL_ADDRESS, self.EMAIL_PASSWORD)
            smtp.send_message(msg)

    def simpleemail(self, mail_id, subject, body):
        msg = EmailMessage()
        msg["Subject"] = subject
        msg["From"] = self.EMAIL_ADDRESS
        msg["To"] = mail_id
        msg.set_content(body)
        self.sendingMessage(msg)


    def htmlmail(self, mail_id, subject, html_msg):
        msg = EmailMessage()
        msg["Subject"] = subject
        msg["From"] = self.EMAIL_ADDRESS
        msg["To"] = mail_id
        msg.set_content(html_msg)
        msg.add_alternative(html_msg, subtype='html')
        self.sendingMessage(msg)


    def mailwithimage(self, mail_id, subject, body, file_name):
        msg = EmailMessage()
        msg["Subject"] = subject
        msg["From"] = self.EMAIL_ADDRESS
        msg["To"] = mail_id
        msg.set_content(body)
        msg.add_alternative(body)
        with open(file_name, 'rb') as f:
            file_data = f.read()
            file_name = f.name
            file_type = imghdr.what(f.name)
        msg.add_attachment(file_data, maintype='image', subtype=file_type, filename=file_name)
        self.sendingMessage(msg)


    def mailwithpdf(self, mail_id, subject, body, file_name):
        msg = EmailMessage()
        msg["Subject"] = subject
        msg["From"] = self.EMAIL_ADDRESS
        msg["To"] = mail_id
        msg.set_content(body)
        msg.add_alternative(body)

        with open(file_name, 'rb') as f:
            file_data = f.read()
            file_name = f.name
        msg.add_attachment(file_data, maintype='application', subtype='octet=stream', filename=file_name)
        self.sendingMessage(msg)



class Gspread:
    def __init__(self, file_name, sheet_name,column_number):
        self.file_name = file_name
        self.sheet_name = sheet_name
        self.emailids=column_number
    def authorizers(self):
        scope = ["https://spreadsheets.google.com/feeds", 'https://www.googleapis.com/auth/spreadsheets',
                 "https://www.googleapis.com/auth/drive.file", "https://www.googleapis.com/auth/drive"]

        creds = ServiceAccountCredentials.from_json_keyfile_name(self.file_name, scope)
        client = gspread.authorize(creds)
        sheet_id = client.open(self.sheet_name).sheet1
        return sheet_id

    def selectandsave(self):
        emails = []
        scope = ["https://spreadsheets.google.com/feeds", 'https://www.googleapis.com/auth/spreadsheets',
                 "https://www.googleapis.com/auth/drive.file", "https://www.googleapis.com/auth/drive"]

        creds = ServiceAccountCredentials.from_json_keyfile_name(self.file_name, scope)
        client = gspread.authorize(creds)
        sheet = client.open(self.sheet_name).sheet1
        data = sheet.get_all_records()
        choices = sheet.row_values(1)

        choose = self.emailids
        column = str()

        if choose in range(0, len(choices)):
            column = choices[choose]
        else:
            exit()

        for i in data:
            emails.append(i[column])

        return emails
