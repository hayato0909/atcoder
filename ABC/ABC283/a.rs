use proconio::input;

fn main() {
    input!{
        a:i64,
        b:i64,
    }

    let mut ans: i64 = 1;
    for i in 0..b {
        ans *= a;
    }

    println!("{}", ans);
}