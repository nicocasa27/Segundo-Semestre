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

print("CasaVelaryon genero:" , {cuantasveces})
    
print("------------------------")
print("------------------------")

