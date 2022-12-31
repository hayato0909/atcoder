use proconio::input;

fn main() {
    input!{
        a: [usize; 5],
    }

    let mut count = vec![0; 101];
    let mut ans = 0;

    for i in a {
        if count[i] == 0 {ans += 1}
        count[i] += 1;
    }
    println!("{}", ans);
}