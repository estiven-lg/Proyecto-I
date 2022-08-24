
from getpass import getpass

# preconfiguracion

print("Configure la frase a adivinar")
answer = list(getpass("Escribe la frase: "))
word = str()
wordList = list()
for letter in answer:
    if(letter == " "):
        word += " "
    else:
        word += "-"
wordList = list(word)
attempts = 3

# incio del juego

print("Bienvenido al Juego de Ahorcado trate de advinar la frase.\n")
while attempts != 0:
    print(word, "     [", " * "*attempts, "]")
    try:
        guess = input('> ')[0].lower()
    except:
        print("escribe algo")
        continue
    matches = 0
    empty_space = 0
    #revisa si la letra esta presente en la frase
    for i in range((len(answer))):
        if (answer[i].lower() == guess.lower()):
            matches += 1
            wordList[i] = answer[i]
            word = "".join(wordList)
        if (wordList[i] == '-'):
            empty_space += 1
            
    if (matches > 1):
        print("La letra '", guess, "' aparece ", matches, " veces. :D")
    elif(matches > 0):
        print("La letra '", guess, "' aparece una vez en la frase. :D")
    else:
        print("La frase no contiene ninguna '", guess, " '. D:")
        attempts -= 1
    #si hay 0 espacios sin advinar es porque ya gano
    if(empty_space == 0):
        print('Has ganado!!!!. La frase es "', "".join(answer), '" , eres asombroso :D.')
        break
#todavia tiene la oportunidad de desifraf la frase completa con las letras que descubrio 
#sino lo logra , perdio
if attempts == 0:
    print(word, "     [", " * "*attempts, "]")
    word = input("has advinado la frase ? , cual es ? ")
    if(word.lower() == "".join(answer).lower()):
            print('Has ganado!!!!. La frase es "', "".join(answer), '" , eres asombroso :D.')
    else:
        print('se acabaron tus intentos,la frase era "', "".join(answer) ,'" ,has perdido :c')

