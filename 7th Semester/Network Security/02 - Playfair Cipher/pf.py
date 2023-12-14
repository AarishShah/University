def generate_key_matrix(key):
    matrix = []
    alphabets = "ABCDEFGHIKLMNOPQRSTUVWXYZ"  # Notice 'J' is omitted
    # Remove non-letters and convert to uppercase
    key = "".join([k.upper() for k in key if k.isalpha()])
    key += alphabets
    seen = set()
    for char in key:
        if char not in seen:
            seen.add(char)
            matrix.append(char)
    return [matrix[i:i + 5] for i in range(0, 25, 5)]


def encrypt_pair(pair, matrix):
    def find_position(char):
        for i, row in enumerate(matrix):
            if char in row:
                return (i, row.index(char))
        return (None, None)

    pos1 = find_position(pair[0])
    pos2 = find_position(pair[1])

    if pos1[0] == pos2[0]:  # Same row
        return matrix[pos1[0]][(pos1[1] + 1) % 5] + matrix[pos2[0]][(pos2[1] + 1) % 5]
    elif pos1[1] == pos2[1]:  # Same column
        return matrix[(pos1[0] + 1) % 5][pos1[1]] + matrix[(pos2[0] + 1) % 5][pos2[1]]
    else:  # Rectangle
        return matrix[pos1[0]][pos2[1]] + matrix[pos2[0]][pos1[1]]


def playfair_encrypt(plaintext, key):
    plaintext = "".join([p.upper()
                        for p in plaintext if p.isalpha()]).replace("J", "I")
    if len(plaintext) % 2 != 0:
        plaintext += "X"  # Padding

    matrix = generate_key_matrix(key)
    ciphertext = ""
    for i in range(0, len(plaintext), 2):
        ciphertext += encrypt_pair(plaintext[i:i + 2], matrix)

    return ciphertext


# Example usage
key = "playfair example"
plaintext = "hide the gold"
ciphertext = playfair_encrypt(plaintext, key)
print("Ciphertext:", ciphertext)
