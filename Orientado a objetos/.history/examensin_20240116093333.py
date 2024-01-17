# Casa Velaryon
# Casa Stark
# Casa Hightower
# Casa Lannister
# Casa Martell
# Casa Tyrell
# Casa Baratheon

import random

def casavelarton_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {casavelarton_income()} )

CasaVelaryontotal = casavelarton_income() * 12 

print ("El numero multiplicado es " , {CasaVelaryontotal} )

cuantasveces = 0 

for _ in range(CasaVelaryontotal // 100):
    print("*")
    cuantasveces += 1

print("he imprimido:" , {cuantasveces})
    

# casavelarton = casavelarton_income()
# print(casavelarton)

