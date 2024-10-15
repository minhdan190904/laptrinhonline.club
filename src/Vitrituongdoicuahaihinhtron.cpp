import java.util.Scanner

val sc = Scanner(System.`in`)

class Radius(){
    var x : Double = 0.0
    var y : Double = 0.0
    var R : Double = 0.0
    init {
        x = sc.nextDouble()
        y = sc.nextDouble()
        R = sc.nextDouble()
    }
    fun distanceSquare(other : Radius) : Double{
        return (x-other.x) * (x-other.x) + (y-other.y) * (y-other.y)
    }

    override fun equals(other: Any?): Boolean {
        if (this === other) return true
        if (javaClass != other?.javaClass) return false

        other as Radius

        if (x != other.x) return false
        if (y != other.y) return false
        if (R != other.R) return false

        return true
    }

    override fun hashCode(): Int {
        return javaClass.hashCode()
    }


}

fun main() {
    var t = sc.nextInt()
    while(t>0){
        var a = Radius()
        var b = Radius()
        val distance : Double = Math.sqrt(a.distanceSquare(b))
        if(a.equals(b)) println("trung nhau")
        else if(a.R + b.R == distance) println("tiep xuc")
        else if(a.R + b.R < distance) println("roi nhau")
        else if(a.R + b.R > distance && distance > a.R && distance > b.R) println("cat nhau")
        else println("chua nhau")
        t--;
    }
    sc.close()
}