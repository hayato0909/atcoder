use proconio::input;
// use superslice::Ext;
// use std::cmp::max;
// use std::cmp::min;
// use std::collections::VecDeque;
// use petgraph::unionfind::UnionFind;

fn main() {
    input! {
        x: usize, 
        y: usize, 
        z: usize, 
        k: usize,
        a: [usize; x],
        b: [usize; y],
        c: [usize; z],
    }
    let mut ab: Vec<usize> = Vec::new();
    for i in &a {
        for j in &b {
            ab.push(*i + *j);
        }
    }
    ab.sort();
    ab.reverse();

    while ab.len() > k {
        ab.pop();
    }
    let mut abc: Vec<usize> = Vec::new();
    for i in &ab {
        for j in &c {
            abc.push(*i + *j);
        }
    }
    abc.sort();
    abc.reverse();
    for i in 0..k {
        println!("{}", abc[i]);
    }
}