import java.util.Scanner

fun GCD(a: Long, b: Long): Long {
    if (b == 0L) return a
    return GCD(b, a % b)
}

fun main() {
    val sc = Scanner(System.`in`)
    var n : Int = sc.nextInt()
    var a : LongArray = LongArray(n)
    a[0] = sc.nextLong()
    var temp : Long = a[0]
    for (i in 1 until n) {
        a[i] = sc.nextLong()
        temp = GCD(temp, a[i])
    }
    println(temp)
}