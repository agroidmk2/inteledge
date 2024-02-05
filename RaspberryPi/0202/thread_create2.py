import threading
import time

def t1():
    while True:
        print("\tt1")
        time.sleep(0.5)

def t2():
    while True:
        print("\t\tt2")
        time.sleep(0.2)

def main():
    threading.Thread(target=t1).start()
    threading.Thread(target=t2).start()

    while True:
        userInput = input()
        print(userInput)

if __name__ == "__main__":
    main()
