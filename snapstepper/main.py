import serial
from time import sleep
from typing import Final

arduino = serial.Serial('COM4', 9600)
steps_per_revolution: Final[int] = 2048
steps_per_jump: Final[int] = 32


for _ in range(int(steps_per_revolution / steps_per_jump) + 3):
    arduino.write('s'.encode())
    sleep(0.1)
