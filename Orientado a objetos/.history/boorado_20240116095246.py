
def Ejemplo_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {Ejemplo_income()} )

Ejemplo_total = Ejemplo_income() * 12 

print ("El numero multiplicado es " , {Ejemplo_total} )

cuantasveces = 0 

for _ in range(Ejemplo_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("Ejemplo genero:" , {cuantasveces} , "monedas" )
    
print("------------------------")
print("------------------------")


def CasaMartell_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaMartell_income()} )

CasaMartell_total = CasaMartell_income() * 12 

print ("El numero multiplicado es " , {CasaMartell_total} )

cuantasveces = 0 

for _ in range(CasaMartell_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("CasaMartell genero:" , {cuantasveces} , "monedas" )
    
print("------------------------")
print("------------------------")

