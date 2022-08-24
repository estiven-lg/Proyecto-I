clicle = range(1, 500)
for c in clicle:
    for b in clicle:
        for a in clicle:
            # si "a" es mayor que todos
            if((a > b and a > c) and ((b**2+c**2) == a**2)):
                print('-----------------------------------------------------------')
                print('A=', a, " B=", b, " C=", c)
                print('''
                                      *
                                    ***
                        A=%s     *****       B=%r
                                *******
                              *********
                            ***********
                            
                                C=%d
                            ''' % ("{:<3}".format(a), b, c))
                print("B^2 + C^2 = A^2")
                print(b, "^2 + ", c, "^2 =", a, "^2")
                print(b**2, ' + ', c**2, " = ", a**2)
                print((b**2+c**2), " = ", a**2)

            # si "b" es mayor que todos
            elif((b > a and b > c) and ((a**2+c**2) == b**2)):
                print('-----------------------------------------------------------')
                print('A=', a, " B=", b, " C=", c)
                print('''
                            *
                            ***
                 A=%s      *****       B=%r
                            *******
                            *********
                            ***********
                            
                                C=%d
                            ''' % ("{:<3}".format(a), b, c))
                print("A^2 + C^2 = B^2")
                print(a, "^2 + ", c, "^2 =", b, "^2")
                print(a**2, ' + ', c**2, " = ", b**2)
                print((a**2+c**2), " = ", b**2)
            # si "c" es mayor que todos
            elif((c > a and c > b) and ((a**2+b**2) == c**2)):
                print('-----------------------------------------------------------')
                print('A=', a, " B=", b, " C=", c)
                print('''
                             
                             *
                            ***       
                A=%s     *******      B=%r
                        ***********
                      ***************
                    *******************
                            
                           C=%d
                            ''' % ("{:<3}".format(a), b, c))
                print("A^2 + B^2 = C^2")
                print(a, "^2 + ", b, "^2 =", c, "^2")
                print(a**2, ' + ', b**2, " = ", c**2)
                print((a**2+b**2), " = ", c**2)
