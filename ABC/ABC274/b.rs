use proconio::input;
use std::cmp::max;
use std::cmp::min;
use proconio::marker::Chars;

fn main() {
    input!{
        h: usize,
        w: usize,
        c: [Chars; h],
    }

    for j in 0..w {
        let mut ans: i32 = 0;
        for i in 0..h {
            if c[i][j] == '#' {ans += 1}
        }
        print!("{} ", ans);
    }
    println!();
}