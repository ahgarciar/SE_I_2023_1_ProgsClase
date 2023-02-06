

def getPeso(vector):
    return sum(vector)

Matriz = [
    [1,0,0,0],
    [1,1,1,0],
    [0,1,1,0]
]

print(Matriz)

Matriz.sort(key= lambda vector:getPeso(vector), reverse=True)

print(Matriz)