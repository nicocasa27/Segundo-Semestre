# CasaVelaryon
# Casa Stark
# Casa Hightower
# Casa Lannister
# Casa Martell
# Casa Tyrell
# Casa Baratheon



import random

def CasaVelaryon_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaVelaryon_income()} )

CasaVelaryon_total = CasaVelaryon_income() * 12 

print ("El numero multiplicado es " , {CasaVelaryon_total} )

cuantasveces = 0 

for _ in range(CasaVelaryon_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("CasaVelaryon genero:" , {cuantasveces} , "monedas" )
    
print("------------------------")
print("------------------------")

def CasaStark_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaStark_income()} )

CasaStark_total = CasaStark_income() * 12 

print ("El numero multiplicado es " , {CasaStark_total} )

cuantasveces = 0 

for _ in range(CasaStark_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("CasaStark genero:" , {cuantasveces} , "monedas" )
    
print("------------------------")
print("------------------------")



def CasaHightower_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaHightower_income()} )

CasaHightower_total = CasaHightower_income() * 12 

print ("El numero multiplicado es " , {CasaHightower_total} )

cuantasveces = 0 

for _ in range(CasaHightower_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("CasaHightower genero:" , {cuantasveces} , "monedas" )
    
print("------------------------")
print("------------------------")


def CasaLannister_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaLannister_income()} )

CasaLannister_total = CasaLannister_income() * 12 

print ("El numero multiplicado es " , {CasaLannister_total} )

cuantasveces = 0 

for _ in range(CasaLannister_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("CasaLannister genero:" , {cuantasveces} , "monedas" )
    
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

