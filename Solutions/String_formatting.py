def print_formatted(number):
    # your code goes here
    
    w = len(str(bin(number)).replace('0b','')) + 1
    for i in range (1, number + 1):
        print(str(i).rjust(w - 1) + str(oct(i))[2:].rjust(w, ' ') +
        str(hex(i)).upper()[2:].rjust(w, ' ') + str(bin(i))[2:].rjust(w, ' '))
        

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)