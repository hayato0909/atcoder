use proconio::input;
// use superslice::Ext;
use std::cmp::max;
use std::cmp::min;
// use petgraph::unionfind::UnionFind;

fn degit(i: i64) -> i64 {
    let mut ans = 0;
    let mut tmp = i;
    while tmp >= 10 {
        ans += 1;
        tmp /= 10;
    }
    ans + 1
}

fn main() {
    input! {
        n: i64,
    }

    let mut i = 1;
    let mut ans = 1000;
    loop {
        if i * i > n {
            break;
        }
        if n % i != 0 {
            i += 1;
            continue;
        }
        let tmp1 = degit(i);
        let tmp2 = degit(n / i);
        let tmp = max(tmp1, tmp2);
        ans = min(ans, tmp);
        i += 1;
    }
    println!("{}", ans);
}