# pip install pycryptodome
from Crypto.Cipher import DES
import binascii


def pad(text):
    # Pad the text to be a multiple of 8 bytes
    while len(text) % 8 != 0:
        text += b' '
    return text


def des_encrypt(plaintext, key):
    des = DES.new(key, DES.MODE_ECB)
    padded_text = pad(plaintext)
    encrypted_text = des.encrypt(padded_text)
    return binascii.hexlify(encrypted_text)


def des_decrypt(encrypted_text, key):
    des = DES.new(key, DES.MODE_ECB)
    decrypted_text = des.decrypt(binascii.unhexlify(encrypted_text))
    return decrypted_text.strip()


# Key must be exactly 8 bytes long
key = b'8bytekey'

# Example usage
plaintext = b'Hello DES!'
encrypted = des_encrypt(plaintext, key)
print("Encrypted:", encrypted)

decrypted = des_decrypt(encrypted, key)
print("Decrypted:", decrypted)
