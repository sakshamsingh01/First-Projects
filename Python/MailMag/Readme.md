This is MailMag a module which provide bulk mailing at ease, all the functions are made and you just have to call them!

There are several functions for two classes  the functions are:

    Mailman class:

        Pass the email id and password while making object;
        mail_id parameter can take list or a single email id

        Functions are as follow:

            simpleemail(mail_id, subject, body)
            htmlmail(mail_id, subject, html_msg)
            mailwithimage(mail_id, subject, body, file_name)
            mailwithpdf(mail_id, subject, body, file_name)

    Gspread Class:

        This requires your token and .json credential file given by google
        Sheet should be shared by you manually to your service account given in credential file
        while making object specify the filname or path, sheet name(spreadsheet name), the column no. in which emails are present
            (columns starts with 0)

        Functions in Gspread are:
            authorizers-> This only make a connection with your google spreadsheet and return that in a variable
            selectandsave-> This function authorize and returns a list of the items in the row of choosen column.


        
        Using Gspread:
        
            Enable API Access for a Project
            
                Head to Google Developers Console and create a new project (or select the one you already have).
                
                In the box labeled “Search for APIs and Services”, search for “Google Drive API” and enable it.
                
                In the box labeled “Search for APIs and Services”, search for “Google Sheets API” and enable it.
                
                For Bots: Using Service Account
                
                A service account is a special type of Google account intended to represent a non-human user that needs to authenticate and be authorized to access data in Google APIs [sic].

                Since it’s a separate account, by default it does not have access to any spreadsheet until you share it with this account. Just like any other Google account.

                Here’s how to get one:

                
                Enable API Access for a Project if you haven’t done it yet.
                
                Go to “APIs & Services > Credentials” and choose “Create credentials > Service account key”.
                
                Fill out the form
                
                Click “Create key”
                
                Select “JSON” and click “Create”
                
                You will automatically download a JSON file with credentials. It may look like this:

                {
                    "type": "service_account",
                    "project_id": "api-project-XXX",
                    "private_key_id": "2cd … ba4",
                    "private_key": "-----BEGIN PRIVATE KEY-----\nNrDyLw … jINQh/9\n-----END PRIVATE KEY-----\n",
                    "client_email": "473000000000-yoursisdifferent@developer.gserviceaccount.com",
                    "client_id": "473 … hd.apps.googleusercontent.com",
                    ...
                }
                
<em>After getting all the credentials just make an object of the Gspread class and call the fuctions</em>

<b>HOW TO IMPORT:

Put Mailmag.py in your working directory

    from Mailmag import Mailman, Gspread

    test=Mailman(email_address="sendersemail@gmail.com",email_password="emailpassword")

    test.simpleemail(mail_id="accepts single email or a list",subject="MailMag",body="This is mailmag")

Note:

   Emailid used to send emails should be allowed python as a application by google, if not enable it in google account settings.
   
   Currently not available via pip or available at pypi, still in working!
