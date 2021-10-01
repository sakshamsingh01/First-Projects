
from distutils.core import setup
setup(
    name='MailMag',
    packages=['MailMag'],
    version='1.0',
    license='MIT',
    description='This library can help you send bulk emails using google spreadsheets',
    author='Rohtansh Sehgal',
    author_email='rohtanshsehgal@gmail.com',
    url='https://github.com/RohtanshSehgal/MailMag',
    download_url='https://github.com/RohtanshSehgal/MailMag.git',
    keywords=['Google Spreadsheet', "smtplib", 'Emails'],
    install_requires=["gspread"],
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'Topic :: Software Development :: Build Tools',
        'License :: OSI Approved :: MIT License',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
    ],
)
