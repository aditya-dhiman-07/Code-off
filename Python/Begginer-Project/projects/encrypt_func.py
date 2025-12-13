import random
import string

chars = " " + string.punctuation + string.ascii_letters + string.digits
chars = list(chars)
key = chars.copy()
random.shuffle(key)

def input_text():
    plain_text = input("Enter the message to be encrypted: ")
    return plain_text

def encrypter(plain_text):
    #ENCRYPT
    cypher_text = ""

    for letter in plain_text:
        index = chars.index(letter)
        cypher_text += key[index]
    return cypher_text

def decrypter(cypher_text):
    #DECRYPT
    plain_text = ""

    for letter in cypher_text:
        index = key.index(letter)
        plain_text += chars[index]
    return plain_text
