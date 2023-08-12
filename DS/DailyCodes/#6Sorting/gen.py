import random

with open('random_numbers.txt', 'w') as f:
    for i in range(100000):
        random_num = random.randint(1, 100000)
        f.write(str(random_num) + '\n')
