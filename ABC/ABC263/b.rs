use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        n: usize,
        p: [usize; n-1],
    }

    let mut ans: i32 = 1;
    let mut par: usize = p[n-2];

    while par != 1 {
        par = p[par-2];
        ans += 1;
    }
    println!("{}", ans);
}