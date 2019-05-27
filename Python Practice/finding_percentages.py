if __name__ == '__main__':
    # https://www.hackerrank.com/challenges/finding-the-percentage/problem
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    score = student_marks[query_name];
    score = round(sum(score[:])/len(score),2)
    print("%.2f" % score)

