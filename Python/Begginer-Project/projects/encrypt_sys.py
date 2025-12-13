from encrypt_func import *
def main():
    plain_text = input_text()

    # ENCRYPT


    cypher_text = encrypter(plain_text)
    print(f"orignal message: : {plain_text} ")
    print(f"encrypted message: : {cypher_text} ")

    # DECRYPT

    print("Would like to decrypt: ")
    dec_ = int(input("If Yes Enter[1] if No Enter[0] : "))

    if dec_ == 1:
        plain_text = decrypter(cypher_text)
        print(f"orignal message: : {cypher_text} ")
        print(f"decrypted message: : {plain_text} ")
    else:
        exit(0)

if __name__ == '__main__':
    main()