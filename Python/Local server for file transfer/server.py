from flask import Flask, redirect, request, url_for, render_template, send_file
from werkzeug.utils import secure_filename

app = Flask(__name__)

@app.route('/', methods = ['GET', 'POST'])
def home():
    return render_template("home.html")
@app.route('/transfer', methods = ['POST'])
def transfer():
    return render_template("transfer.html")
@app.route('/uploader', methods = ['POST'])
def upload():
    f = request.files["File"]
    f.save(secure_filename(f.filename))
    return render_template("upload_complete.html")
@app.route('/return_home', methods = ['POST'])
def return_home():
    return redirect(url_for("home", Id = valid[0]))
@app.route('/download', methods = ['POST'])
def download():
    return render_template('download.html')
@app.route('/downloader', methods = ['POST'])
def downloader():
    file_name = request.form['file_name']
    return send_file(file_name, as_attachment = True) #File to download must be in the same directory as the server.py
if __name__ == '__main__':
    app.run(debug = True, host = '0.0.0.0')
