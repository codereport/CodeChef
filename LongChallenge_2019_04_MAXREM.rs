// code_report Solution
// Video Link: https://youtu.be/JT3AYsVtYKM
// Problem Link: https://www.codechef.com/APRIL19B/problems/MAXREM/

use std::io;

fn get_line() -> String {
	let mut res = String::new();
	let stdin = io::stdin();
	stdin.read_line(&mut res);
	res
}

fn get_int() -> i32 {
	get_line().trim().parse().unwrap()
}

fn get_ints() -> Vec<i32> {
    get_line().trim().split(" ").map(|i| i.parse().unwrap()).collect()
}

fn solve(mut v: Vec<i32>) -> i32 {
    v.sort();
    v.dedup();
    return if v.len() == 1 { 0 } else { v[v.len() - 2] }
}

fn main() {
    let _ = get_int();
    let mut v = get_ints();
    println!("{}", solve(v));
}
