# CasaVelaryon
# Casa Stark
# Casa Hightower
# Casa Lannister
# Casa Martell
# Casa Tyrell
# Casa Baratheon

import random
CasaVelaryon
def CasaVelaryon_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 

print ("El numero aletaorio es" , {CasaVelaryon_income()} )

casavelarton_total = CasaVelaryon_income() * 12 

print ("El numero multiplicado es " , {CasaVelaryon_total} )

cuantasveces = 0 

for _ in range(CasaVelaryon_total // 100):
    print("*",  end = " ")
    cuantasveces += 1

print("he imprimido:" , {cuantasveces})
    
print("------------------------")
print("------------------------")

