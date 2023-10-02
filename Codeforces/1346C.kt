
fun main() {
    var t = readLine()!!.toInt()
    while (t-- > 0) {

        val (n, k, x, y) = readLine()!!.split(" ").map { it.toInt() }
        var arr = readLine()!!.split(" ").map { it.toInt() }.sorted()
        val mx = n * k.toLong()
        var ans = 0
        var i = 0
        var sum = 0L
        var ok = true
        while (i < n && sum + arr[i] <= mx) {
            sum += arr[i]
            if (ok && arr[i] > k) {
                ok = false
                ans = (n - i) * x
            }
            i++
        }
        if (ok) {
            ans = (n - i) * x
        } else {
            ans = minOf(ans, (n - i) * x + y)
        }
        println(ans)
    }
}
