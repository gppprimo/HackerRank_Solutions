import textwrap
import math

def wrap(string, max_width):
    idx = 0
    res_list = []
    for i in range (math.ceil(len(string) / max_width)):
        res_list.append(string[idx:idx + max_width])
        idx = idx + max_width
    return '\n'.join(res_list)

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)