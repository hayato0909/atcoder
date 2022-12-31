use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        n: usize,
    }

    let mut a = vec![vec![0; n]; n];

    for i in 0..n {
        for j in 0..i+1 {
            if j == 0 || j == i {a[i][j] = 1}
            else {a[i][j] = a[i-1][j-1] + a[i-1][j]}
        }
    }

    for i in 0..n {
        for j in 0..i+1 {
            print!("{} ", a[i][j]);
        }
        println!();
    }
}