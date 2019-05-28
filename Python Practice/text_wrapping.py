import textwrap

# https://www.hackerrank.com/challenges/text-wrap/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

def wrap(string, max_width):
    wrapper = textwrap.TextWrapper(width=max_width) 
  
    word_list = wrapper.wrap(text=string)
    word_list = "\n".join(word_list)
    return word_list

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)