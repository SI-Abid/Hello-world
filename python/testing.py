def A():
    print('A')
    
def B():
    print('B')
    
def C():
    print('C')
    
def D():
    print('D')
    
def E():
    print('E')
    
def F():
    print('F')
    
func = [A, B, C, D, E, F]

text = input('Enter your text: ')
for char in text:
    func[ord(char)-65]()