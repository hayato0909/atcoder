use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
// use std::collections::VecDeque;
// use petgraph::unionfind::UnionFind;

fn check(num: usize, d: Vec<usize>) -> bool {
    let mut n = num;
    while n >= 10 {
        for i in 0..d.len() {
            if n % 10 == d[i] {
                return false;
            }
        }
        n = n / 10;
    }
    for i in 0..d.len() {
        if n == d[i] {
            return false;
        }
    }
    return true;
}

fn main() {
    input! {
        mut n: usize, 
        k: usize, 
        d: [usize; k],
    }

    loop {
        if check(n, d.clone()) {
            println!("{}", n);
            break;
        }
        n += 1;
    }
}