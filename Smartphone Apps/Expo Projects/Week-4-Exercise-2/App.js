import { StatusBar } from 'expo-status-bar';
import { useState } from "react";
import React from 'react';
import { StyleSheet, Text, View, Alert, Button} from 'react-native';
import words from "./words.js";
import makeWord from "./makeWord.js"

export default function App() {

const [word, setWord] = useState("_")

  return (
    <View style={styles.container}>
      <Button
      title="New word"
      onPress={() => {setWord(makeWord(words[3]))}
      }
      />
      <Text>{word}</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
