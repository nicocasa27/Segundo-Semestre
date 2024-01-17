# CasaVelaryon
# Casa Stark
# Casa Hightower
# Casa Lannister
# Casa Martell
# Casa Tyrell
# Casa Baratheon

import random

def casavelart_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {casavelarton_income()} )

casavelarton_total = casavelarton_income() * 12 

print ("El numero multiplicado es " , {casavelarton_total} )

cuantasveces = 0 

for _ in range(casavelarton_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("he imprimido:" , {cuantasveces})
    
print("------------------------")
print("------------------------")

