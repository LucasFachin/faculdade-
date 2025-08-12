import sys
from rich import print 
from time import sleep 
import time

def printLyrics():
    lines = [
        ("I wanna da-", 0.06),  #1
        ("I wanna dance in the lights", 0.05), #2
        ("I wanna ro-", 0.07), #3
        ("I wanna rock your body", 0.08), #4
        ("I wanna go", 0.08), #5
        ("I wanna go for a ride", 0.068), #6
        ("Hop in the music and", 0.07), #7
        ("Rock your body", 0.08), #8
        ("Rock that body", 0.069), #9
        ("come on, come on", 0.035), #10
        ("Rock that body", 0.05), #11
        ("(Rock your body)", 0.03), #12
        ("Rock that body", 0.049), #13
        ("come on, come on", 0.035), #14
        ("Rock that body", 0.08), #15
    ]
    delays = [0.2, 1, 0.2, 1, 0.2, 0.8, 0.2, 0.5, 0.18, 0.1, 0.15, 0.3,0.3, 0.1, 5]
for i, (line, char_delay) in enumerate(lines):
for char in line:
if line == '(Rock your body)':
print(f"[orange4]{char}[/orange4]", end='')
else:
print(f"[bold][gold3]{char}[/bold][/gold3]", end='')
sys.stdout.flush()
sleep(char_delay)
print()
sleep(delays[i])
printLyrics()