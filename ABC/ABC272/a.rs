use proconio::input;

fn main() {
    input!{
        n: i64,
        a: [i64; n],
    }

    let mut ans: i64 = 0;

    for i in a {
        ans += i;
    }

    println!("{}", ans);
}