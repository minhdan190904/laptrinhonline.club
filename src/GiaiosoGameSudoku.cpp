import java.util.Scanner;

public class SudokuSolver {

    static boolean[][] Hang = new boolean[9][10];
    static boolean[][] Cot = new boolean[9][10];
    static int[][] Sudoku = new int[9][9];
    static boolean kt = false;

    static boolean Kiemtra(int hang, int cot, int x) {
        for (int i = hang; i < hang + 3; i++) {
            for (int j = cot; j < cot + 3; j++) {
                if (Sudoku[i][j] == x) {
                    return false;
                }
            }
        }
        return true;
    }

    static void GiaiSudoku(int hang, int cot) {
        if (hang == 9) {
            for (int[] i : Sudoku) {
                for (int j : i) {
                    System.out.print(j + " ");
                }
                System.out.println();
            }
            kt = true;
        } else {
            if (Sudoku[hang][cot] == 0) {
                for (int i = 1; i <= 9; i++) {
                    if (!Hang[hang][i] && !Cot[cot][i] && Kiemtra(hang - (hang % 3), cot - (cot % 3), i)) {
                        Sudoku[hang][cot] = i;
                        Hang[hang][i] = true;
                        Cot[cot][i] = true;
                        if (cot < 8) {
                            GiaiSudoku(hang, cot + 1);
                        } else {
                            GiaiSudoku(hang + 1, 0);
                        }
                        if (kt) {
                            return;
                        }
                        Sudoku[hang][cot] = 0;
                        Hang[hang][i] = false;
                        Cot[cot][i] = false;
                    }
                }
            } else {
                if (cot < 8) {
                    GiaiSudoku(hang, cot + 1);
                } else {
                    GiaiSudoku(hang + 1, 0);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                Sudoku[i][j] = scanner.nextInt();
                Hang[i][Sudoku[i][j]] = true;
                Cot[j][Sudoku[i][j]] = true;
            }
        }

        GiaiSudoku(0, 0);
    }
}