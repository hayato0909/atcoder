use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
// use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        k: i64,
    }
    let mut a = 7;
    for i in 1..k+1 {
        if a % k == 0 {
            println!("{}", i);
            return;
        }
        a = (a * 10 + 7) % k;
    }
    println!("-1");
}