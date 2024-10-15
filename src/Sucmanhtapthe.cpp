def max_team_strength(N, M, groups, current_group, current_strength, max_strength):
    if current_group == N:
        max_strength[0] = max(max_strength[0], current_strength % M)
        return

    for i in range(len(groups[current_group])):
        max_team_strength(N, M, groups, current_group + 1, current_strength + groups[current_group][i]**2, max_strength)

if __name__ == "__main__":
    N, M = map(int, input().split())
    groups = []

    for _ in range(N):
        group_info = list(map(int, input().split()[1:]))
        groups.append(group_info)

    max_strength = [0]
    max_team_strength(N, M, groups, 0, 0, max_strength)

    print(max_strength[0])