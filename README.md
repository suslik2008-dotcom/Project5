<img width="186" height="709" alt="Снимок экрана 2026-10-03 142603" src="https://github.com/user-attachments/assets/96f503e1-afd6-4c07-b0c9-ea408f5cda00" />
Домашнее задание к работе 5: Построить функцию w = fabs(cos(x)-cos(y))^(1 + 2sin^2(y)) * (1 + z + z^2/2 + z^3/3 + z^4/4)

1. Начало
2. Вводим переменные: x, y, z
3. Вычисляем a = fabs(cos(x) - cos(y))
4. Вычисляем b = pow(a, 1 + pow(sin(y), 2)*2)
5. Вычисляем c = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4
6. Вычисляем и выводим на экран w = b*c
