use proconio::input;
use std::cmp::max;
use std::cmp::min;

fn main() {
    input!{
        s: String,
    }

    let tmp: Vec<char> = s.chars().collect();
    let mut ans = 0;

    for i in tmp {
        if i == 'v' {ans += 1}
        else {ans += 2}
    }

    println!("{}", ans);
}