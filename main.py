import string, typing, time

class Game:
    def __init__(self):
        self.chars = [_ for _ in list(string.ascii_lowercase)]
        self.time_elapsed  = time.time()
    def giveSentence(self):
        for char in self.chars:
            print(char)

ai = Game()
ai.giveSentence()