#!/usr/bin/env python
# -*- coding: utf-8 -*-
# This program is dedicated to the public domain under the CC0 license.

"""
Simple Bot to reply to Telegram messages.
First, a few handler functions are defined. Then, those functions are passed to
the Dispatcher and registered at their respective places.
Then, the bot is started and runs until we press Ctrl-C on the command line.
Usage:
Basic Echobot example, repeats messages.
Press Ctrl-C on the command line or send a signal to the process to stop the
bot.
"""

import logging

from telegram.ext import Updater, CommandHandler, MessageHandler, Filters

# Enable logging
logging.basicConfig(
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s', level=logging.INFO
)

logger = logging.getLogger(__name__)


# Define a few command handlers. These usually take the two arguments update and
# context. Error handlers also receive the raised TelegramError object in error.
def start(update, context):
    """Send a message when the command /start is issued."""
    update.message.reply_text('Hi! use "/help" to get instructions')
    riddle1 = "Born from the soil, heated till I am red, I not a metal but still give clear metallic sound when " \
              "struck with my other one. What am I?"
    clue = "https://bit.ly/2TFuZUn"
    update.message.reply_text(f"Welcome, Citizens of Digital Age.This is your quest to be the Sole Champion.\nYour "
                              f"Journey starts with this small Riddle.")
    update.message.reply_text(f"{riddle1}")
    update.message.reply_text(f"Your clue to first riddle is: {clue}")


def help_command(update, context):
    """Send a message when the command /help is issued."""
    update.message.reply_text('Read the instructions carefully before starting the hunt\n1. Use your laptop to hunt '
                              'the treasure\n2. While typing your answer you have to follow certain rules\na) There '
                              'must not be any space in between the answer\nb) Start your answer with a forward slash '
                              '(/) '
                              ', no other symbols to be used\nc) All letters should be in lower case for '
                              'example: /answerriddle\n'
                              '3. you will be getting some special codes while solving the riddles ,collect them to '
                              'use at the final step of the game ** Codes are in Bebas Nueue Font**')


def echo(update, context):
    """Echo the user message."""
    link="https://i.imgflip.com/33jouq.jpg"
    update.message.reply_text(f"Wrong answer!, My advice is\n{link}")
    update.message.reply_text("If you haven't read the instructions use /help")

def checkme(update,context):
    update.message.reply_text("Yeah this is right way to write!")

def riddle2(update, context):
    riddle = "I run but i have no legs, what am i?"
    clue = "https://bit.ly/3mKSrw5"
    update.message.reply_text(f"That was one small step for a candidate, but one giant leap in the Hunt.\nWarrior, "
                              f"Your Next Quest is as ....")
    update.message.reply_text(f"{riddle}")
    update.message.reply_text(f"Here is your clue:\n{clue}")


def riddle3link(update, context):
    link = "https://bit.ly/35PmqvY"
    # riddle at youtube comment clue is carpet pic
    update.message.reply_text(f"That was a close one. Who nose will you be getting next one right?\nCandidate, "
                              f"Get Ready here is your next order")
    update.message.reply_text(f"{link}")


def riddle4(update, context):
    drive_link = "https://bit.ly/3oIKeKm"
    # i am dead!
    update.message.reply_text(f"You've earned the Azrael's Blade\nCollect it here\n{drive_link}")


def riddle5(update, context):
    drive_link = "https://bit.ly/34OqRbb"
    # alomohra
    update.message.reply_text(f"You've earned the second part of Azrael's Blade\n'Medallion of Life'\nCollect it here\n{drive_link}")


def riddle6(update, context):
    links = "https://bit.ly/3oGMlhT"
    update.message.reply_text(f"Objective updated!\nNext Objective:\n{links}")


def riddle7(update, context):
    riddle = "Hit me hard and i will crack but you will never stop me from staring back what am i?"
    clue = "Hint : tniH"
    update.message.reply_text(f"Checkpoint reached!\nObjective updated\nNew objective:")
    update.message.reply_text(riddle)
    update.message.reply_text(f"Clue is:\n{clue}")


def riddle8(update, context):
    drive_link = "https://bit.ly/3oFsJed"
    # riddle at drive(they dont look sus but they are always upto something,clue:shhhhhh!!)
    update.message.reply_text(f"You've earned 'The Key from\n'God's Favorite Son''\nCollect here\n{drive_link}")


def riddle9(update, context):
    riddle = "What can you hold in your right hand but not in your left hand?"
    clue = "https://bit.ly/3jJDhVT"
    update.message.reply_text(f"Lets see if you are a KNIGHT or a SOLDIER\nHere is your riddle")
    update.message.reply_text(f"{riddle}")
    update.message.reply_text(f"Clue is:\n{clue}")


def riddle10(update, context):
    drive_link = "https://bit.ly/31X9LpG"
    update.message.reply_text(f"Now Your Azreal's Sword is Ready. Go Unleash its power.")
    update.message.reply_text(f"Collect at:\n{drive_link}")


def main():
    """Start the bot."""
    # Create the Updater and pass it your bot's token.
    # Make sure to set use_context=True to use the new context based callbacks
    # Post version 12 this will no longer be necessary
    updater = Updater("TOKEN", use_context=True)

    # Get the dispatcher to register handlers
    dp = updater.dispatcher

    # on different commands - answer in Telegram
    dp.add_handler(CommandHandler("start", start))
    dp.add_handler(CommandHandler("brick", riddle2))
    dp.add_handler(CommandHandler("nose", riddle3link))
    dp.add_handler(CommandHandler("kaleenbhaiya", riddle4))
    dp.add_handler(CommandHandler("chadwickboseman", riddle5))
    dp.add_handler(CommandHandler("alohomora", riddle6))
    dp.add_handler(CommandHandler("blackdwarf", riddle7))
    dp.add_handler(CommandHandler("mirror", riddle8))
    dp.add_handler(CommandHandler("imposters", riddle9))
    dp.add_handler(CommandHandler("lefthand", riddle10))
    dp.add_handler(CommandHandler("answerriddle",checkme))
    dp.add_handler(CommandHandler("help", help_command))

    # on noncommand i.e message - echo the message on Telegram
    dp.add_handler(MessageHandler(Filters.text, echo))

    # Start the Bot
    updater.start_polling()

    # Run the bot until you press Ctrl-C or the process receives SIGINT,
    # SIGTERM or SIGABRT. This should be used most of the time, since
    # start_polling() is non-blocking and will stop the bot gracefully.
    updater.idle()


if __name__ == '__main__':
    main()
