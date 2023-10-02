import java.lang.*;

private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    val t = readInt()
    for (tc in 1..t) {
        solve()
    }
}

fun solve() {
    val (n,m)=readInts()
    var u = IntArray(m)
    var v = IntArray(m)
    var w = IntArray(m)

    for (i in 0..m) {
        val (x,y,z) = readInts()
        u[i]=x-1
        v[i]=y-1
        w[i]=z
    }
    var a = IntArray(n)
    for(i in 0..m){
        a[u[i]]=maxOf(a[u[i]],w[i])
        a[v[i]]=maxOf(a[v[i]],w[i])
    }
    for (i in 1..m) {
        if(minOf(a[u[i]],a[v[i]])!=w[i]){
            println("NO")
            return
        }
    }

    println("YES")
    println(a.joinToString(" "))
}
