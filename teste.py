import time

n = 1000000000 
sum = 0

start_time = time.time()

for i in range(1, n + 1):
    sum += i

end_time = time.time()
elapsed_time = end_time - start_time

print("Resultado:", sum)
print("Tempo de execução:", elapsed_time, "segundos")
