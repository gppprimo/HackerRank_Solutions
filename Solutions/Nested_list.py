def nested_list(names_score):
    dic_res = {}
    scores = []
    for data in names_score:
        if data:
            if not data[1] in dic_res:
                dic_res[data[1]] = []
                dic_res[data[1]].append(data[0])
            else:
                dic_res[data[1]].append(data[0])
            scores.append(data[1])
    scores.sort()
    last_score = scores[0]
    for s in scores:
        if last_score != s:
            res_names = dic_res[s]
            break
    res_names.sort()
    return res_names
            
if __name__ == '__main__':
    names_score = [[]]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        names_score.append(list([name, score]))
    res_list =nested_list(names_score)
    
    for s in res_list:
        print(s)
    
        