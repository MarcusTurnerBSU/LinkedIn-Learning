import React, { useState } from "react";
import { StyleSheet, Text, View, TextInput } from "react-native";
import Constants from "expo-constants";

const allEntries = [];

export default function App() {
  const [textInput, onChangeText] = useState("");
  const [textOutput, onSubmitEditing] = useState("");

  return (
    <View style={styles.container}>
      <TextInput
        style={styles.input}
        onChangeText={onChangeText}
        onSubmitEditing={() => {
          onSubmitEditing(textInput);
          allEntries.push(textInput + "\n");
        }}
        placeholder="enter text here"
        keyboardType="default"
        multiline={false}
        keyboardAppearance="default"
        returnKeyType="done"
        clearTextOnFocus={true}
        clearButtonMode="always"
      />
      <Text style={{ margin: 14, fontSize: 18 }}>{textInput}</Text>
      <Text style={{ margin: 14, fontSize: 18 }}>{textOutput}</Text>
      <Text style={{ margin: 14, fontSize: 18 }}>{allEntries}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: "flex-start",
    paddingTop: Constants.statusBarHeight,
    backgroundColor: "#ecf0f1",
    padding: 8,
    backgroundColor: "#ffaaaa",
  },
  input: {
    marginTop: 20,
    marginLeft: 5,
    fontSize: 18,
    textAlign: "left",
    height: 50,
    borderColor: "gray",
    borderWidth: 1,
    padding: 6,
    borderRadius: 10,
    backgroundColor: "#fff",
  },
});
