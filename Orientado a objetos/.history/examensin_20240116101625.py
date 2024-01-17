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



CasaVelaryon_total = CasaVelaryon_income() * 12 



cuantasveces1 = 0 

for _ in range(CasaVelaryon_total // 100):
    print("*",  end = " ")
    cuantasveces1 += 1

print("CasaVelaryon genero:" , {cuantasveces1} , "monedas" )

print("##########")  
Casa_Velaryon = cuantasveces1
print Casa_Velaryon
print("##########")    
print("------------------------")
print("------------------------")

def CasaStark_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaStark_total = CasaStark_income() * 12 



cuantasveces2 = 0 

for _ in range(CasaStark_total // 100):
    print("*",  end = " ")
    cuantasveces2 += 1
print()
print("CasaStark genero:" , {cuantasveces2} , "monedas" )
    
print("------------------------")
print("------------------------")



def CasaHightower_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaHightower_total = CasaHightower_income() * 12 



cuantasveces3 = 0 

for _ in range(CasaHightower_total // 100):
    print("*",  end = " ")
    cuantasveces3 += 1
print()
print("CasaHightower genero:" , {cuantasveces3} , "monedas" )
    
print("------------------------")
print("------------------------")


def CasaLannister_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaLannister_total = CasaLannister_income() * 12 



cuantasveces4 = 0 

for _ in range(CasaLannister_total // 100):
    print("*",  end = " ")
    cuantasveces4 += 1
print()
print("CasaLannister genero:" , {cuantasveces4} , "monedas" )

    
print("------------------------")
print("------------------------")


def CasaMartell_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaMartell_total = CasaMartell_income() * 12 



cuantasveces5 = 0 

for _ in range(CasaMartell_total // 100):
    print("*",  end = " ")
    cuantasveces5 += 1
print()
print("CasaMartell genero:" , {cuantasveces5} , "monedas" )
    
print("------------------------")
print("------------------------")


def CasaTyrell_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaTyrell_total = CasaTyrell_income() * 12 


cuantasveces6 = 0 

for _ in range(CasaTyrell_total // 100):
    print("*",  end = " ")
    cuantasveces6 += 1

print()
print("CasaTyrell genero:" , {cuantasveces6} , "monedas" )
    
print("------------------------")
print("------------------------")


def CasaBaratheon_income():
    # poner un generador de monedas aleatorio
    return random.randint(50, 1000) // 100 * 100 



CasaBaratheon_total = CasaBaratheon_income() * 12 



cuantasveces7 = 0 

for _ in range(CasaBaratheon_total // 100):
    print("*",  end = " ")
    cuantasveces7 += 1
print()
print("CasaBaratheon genero:" , {cuantasveces7} , "monedas" )
    
print("------------------------")
print("------------------------")

minimo = min (cuantasveces1, cuantasveces2, cuantasveces3, cuantasveces4 , cuantasveces5 , cuantasveces6, cuantasveces7)
print("El minimo es, " , {minimo})