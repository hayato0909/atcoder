use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
// use petgraph::unionfind::UnionFind;

fn gcd(a: i64, b: i64) -> i64 {
    if b == 0 { a }
    else { gcd(b, a%b) }
}

fn main() {
    input! {
        mut t: i32,
    }
    while t != 0 {
        t -= 1;
        input! {
            n: i64,
            d: i64,
            mut k: i64,
        }
        k -= 1;
        let a = n / gcd(n, d);
        println!("{}", d*k%n+k/a);
    }
}