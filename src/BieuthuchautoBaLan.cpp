def precedence(operator):
    if operator in ('+', '-'):
        return 1
    elif operator in ('*', '/'):
        return 2
    elif operator == '^':
        return 3
    return -1

def is_operator(ch):
    return ch in ('+', '-', '*', '/', '^')

def infix_to_postfix(infix):
    postfix = []
    stack = []
    
    for char in infix:
        if char.isspace():
            continue

        if char.isalnum():
            postfix.append(char)
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                postfix.append(stack.pop())
            if stack and stack[-1] == '(':
                stack.pop()
            else:
                return "Invalid Expression"
        elif is_operator(char):
            while stack and precedence(stack[-1]) >= precedence(char):
                postfix.append(stack.pop())
            stack.append(char)

    while stack:
        if stack[-1] == '(':
            return "Invalid Expression"
        postfix.append(stack.pop())

    return ''.join(postfix)

if __name__ == "__main__":
    infix = input()
    postfix = infix_to_postfix(infix)
    if postfix == "Invalid Expression":
        print("Invalid Expression")
    else:
        print(postfix)
        infix = infix.replace('/', '//')
        print(eval(infix))