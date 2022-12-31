use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;
use std::f64::consts::PI;

fn main() {
    input!{
        n: usize,
        a: [Chars; n],
    }

    for i in 0..n {
        for j in 0..n {
            if i == j {continue}
            if a[i][j] == 'W' && a[j][i] == 'L' {continue}
            else if a[i][j] == 'D' && a[j][i] == 'D' {continue}
            else if a[i][j] == 'L' && a[j][i] == 'W' {continue}
            println!("incorrect");
            return;
        }
    }
    println!("correct");
}